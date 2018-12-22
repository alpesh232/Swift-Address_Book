# SwiftAddressBook

Complete wrapper for the ABAddressBook C-Framework for iOS, written in Swift to be typesafe and convenient

Description
It is tedious and requires very much reading in the documentation if you want to understand the ABAddressBook in iOS. To provide a solution, this wrapper uses Swift, which is strong-typed (unlike c). It also circumvents the use of unsafe c-pointers when accessing ABAddressBook from Swift, by directly casting them to the correct type. All properties, previously only available via the correct key, can now be accessed conveniently via variables.

Here´s how you would access ABAddressBook via SwiftAddressBook:

Request access

```ruby
swiftAddressBook?.requestAccessWithCompletion({ (success, error) -> Void in
if success {
//do something with swiftAddressBook
}
else {
//no success. Optionally evaluate error
}
})
```

Use Addressbook (e.g. get array of all people and log their phone numbers)

```ruby
if let people = swiftAddressBook?.allPeople {
for person in people {
//person.phoneNumbers is a "multivalue" entry
//so you get an array of MultivalueEntrys
//see MultivalueEntry in SwiftAddressBook
NSLog("%@", person.phoneNumbers?.map( {$0.value} ))
}
}
```

Complicated Swift typecasting to NS-..., thousand times of unwrapping optionals, figuring out which constant is the key to your person property, distinguishing between group, source or person - nothing that you have to deal with any more
