

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>

typedef void (^ChangeCallback)(ABAddressBookRef addressBookRef);

@interface SwiftAddressBookObserver : NSObject

- (void)startObserveChangesWithCallback:(ChangeCallback)callback;
- (void)stopObserveChanges;

@end
