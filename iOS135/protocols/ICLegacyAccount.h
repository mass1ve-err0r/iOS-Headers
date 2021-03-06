/* Generated by RuntimeBrowser.
 */

@protocol ICLegacyAccount <NSObject>

@required

- (NSString *)accountIdentifier;
- (<ICLegacyFolder> *)defaultFolder;
- (NSString *)emailAddress;
- (NSSet *)folders;
- (bool)isManaged;
- (NSString *)localizedAttachmentsNotSupportedReason;
- (NSManagedObjectContext *)managedObjectContext;
- (NSString *)name;
- (NSManagedObjectID *)objectID;
- (NSString *)objectIdentifier;
- (bool)preventMovingNotesToOtherAccounts;
- (bool)supportsAttachments;

@end
