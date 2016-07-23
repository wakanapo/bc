#include "addressbook-impl.h"

using namespace::std;

bool MyAddressBook::Insert(const Contact& contact) {
  int left = 0;
  int right = (int)m_contacts.size();
  int mid = 0;
  while (left < right) {
    mid = (left + right) / 2;
    if (m_contacts[mid]->name() == contact.name())
      return false;
    else if (contact.name() < m_contacts[mid]->name())
      right = mid;
    else
      left = mid + 1;
  }
  Contact* p = new Contact(contact.name(), contact.email());
  if (m_contacts.size() == 0) 
    m_contacts.push_back(p);
  else
    m_contacts.insert(m_contacts.begin() + mid + 1, p);
  return true;
}

const Contact* MyAddressBook::FindEmail(const string& email) const {
  for (auto contact : m_contacts) {
    if (contact->email() == email)
      return contact;
  }
  return nullptr;
}
  
const Contact* MyAddressBook::FindName(const string& name) const {
  int left = 0;
  int right = (int)m_contacts.size();
  while (left < right) {
    int mid = (left + right) / 2;
    if (m_contacts[mid]->name() == name)
      return m_contacts[mid];
    else if (name < m_contacts[mid]->name())
      right = mid;
    else
      left = mid + 1;
  }
  return nullptr;
}

const Contact* MyAddressBook::FindNext(const Contact& contact) const {
  int left = 0;
  int right = (int)m_contacts.size();
  while (left < right) {
    int mid = (left + right) / 2;
    if (m_contacts[mid]->name() == contact.name()) {
      if (mid + 1 < (int)m_contacts.size())
        return m_contacts[mid + 1];
      return nullptr;
    }
    else if (contact.name() < m_contacts[mid]->name())
      right = mid;
    else
      left = mid + 1;
  }
  return nullptr;
}

bool MyAddressBook::Delete(const Contact& contact) {
  int left = 0;
  int right = (int)m_contacts.size();
  int mid = 0;
  while (left < right) {
    mid = (left + right) / 2;
    if (m_contacts[mid]->name() == contact.name()) {
      m_contacts.erase(m_contacts.begin() + mid);
      return true;
    }
    else if (contact.name() < m_contacts[mid]->name())
      right = mid;
    else
      left = mid + 1;
  }
    return false;
}

