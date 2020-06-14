//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICNoteContainer.h>

#import <NotesShared/ICCloudObject-Protocol.h>

@class ICAccountProxy, ICFolder, ICSelectorDelayer, NSData, NSSet, NSString;

@interface ICAccount : ICNoteContainer <ICCloudObject>
{
    _Bool _didAddObservers;
    _Bool _didAddTrashObservers;
    ICFolder *_defaultFolder;
    ICFolder *_trashFolder;
    ICAccountProxy *_accountProxy;
    ICSelectorDelayer *_trashFolderHiddenSelectorDelayer;
}

+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)keyPathsForValuesAffectingLocalizedName;
+ (id)standardFolderIdentifierWithPrefix:(id)arg1 accountIdentifier:(id)arg2 accountType:(int)arg3;
+ (void)localeDidChange:(id)arg1;
+ (void)initialize;
+ (id)accountsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)localizedLocalAccountNameMidSentence;
+ (id)localizedLocalAccountName;
+ (_Bool)clearAccountForAppleCloudKitTable;
+ (_Bool)isCloudKitAccountAvailable;
+ (id)accountsWithAccountType:(int)arg1 context:(id)arg2;
+ (id)allActiveAccountsInContext:(id)arg1;
+ (id)allAccountsInContext:(id)arg1;
+ (id)defaultAccountInContext:(id)arg1;
+ (id)localAccountInContext:(id)arg1;
+ (id)cloudKitIfMigratedElseLocalAccountInContext:(id)arg1;
+ (id)cloudKitAccountInContext:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1 context:(id)arg2;
+ (void)deleteAccountWithBatchDelete:(id)arg1;
+ (void)deleteAccount:(id)arg1;
+ (id)newLocalAccountInContext:(id)arg1;
+ (id)newAccountWithIdentifier:(id)arg1 type:(int)arg2 context:(id)arg3;
+ (void)initializeLocalAccountNamesInBackground;
+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) ICSelectorDelayer *trashFolderHiddenSelectorDelayer; // @synthesize trashFolderHiddenSelectorDelayer=_trashFolderHiddenSelectorDelayer;
@property(retain, nonatomic) ICAccountProxy *accountProxy; // @synthesize accountProxy=_accountProxy;
@property(retain, nonatomic) ICFolder *trashFolder; // @synthesize trashFolder=_trashFolder;
@property(retain, nonatomic) ICFolder *defaultFolder; // @synthesize defaultFolder=_defaultFolder;
@property(nonatomic) _Bool didAddTrashObservers; // @synthesize didAddTrashObservers=_didAddTrashObservers;
@property(nonatomic) _Bool didAddObservers; // @synthesize didAddObservers=_didAddObservers;
- (void).cxx_destruct;
- (id)ic_loggingValues;
- (id)ic_loggingIdentifier;
- (void)updateTrashFolderHiddenNoteContainerState;
- (void)noteWillBeDeletedOrUndeleted:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (_Bool)supportsEditingNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleNotesIncludingTrash;
- (id)predicateForVisibleNotes;
- (id)predicateForAttachmentsInAccount;
- (id)predicateForNotesInAccount;
- (id)titleForTableViewCell;
- (void)updateAccountNameForAccountListSorting;
@property(nonatomic) _Bool didChooseToMigrate; // @dynamic didChooseToMigrate;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int accountType; // @dynamic accountType;
- (id)titleForNavigationBar;
- (unsigned long long)visibleNotesIncludingTrashCount;
- (unsigned long long)visibleNotesCount;
- (id)visibleNotes;
- (id)accountName;
- (_Bool)canBeSharedViaICloud;
- (_Bool)canPasswordProtectNotes;
- (id)passwordProtectedNotes;
- (id)cryptoPassphraseVerifier;
- (_Bool)shouldExcludeFilesFromBackup;
- (id)allChildObjects;
- (id)allItemsFolderLocalizedTitle;
- (id)folderWithIdentifier:(id)arg1;
- (id)visibleNoteContainerChildren;
- (id)visibleNoteContainers;
- (id)reservedAccountFolderTitles;
- (_Bool)hasAnyCustomFolders;
- (_Bool)visibleRootFoldersContainFolderWithTitle:(id)arg1;
- (id)visibleFoldersWithParent:(id)arg1;
- (id)predicateForPinnedNotes;
- (id)predicateForVisibleFolders;
- (id)predicateForFolders;
- (unsigned long long)countOfVisibleFolders;
- (id)visibleFolders;
- (_Bool)hasSameCryptoKeyAsAccount:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)supportsLegacyTombstones;
- (_Bool)isDeletable;
- (_Bool)isLeaf;
- (id)localizedNameMidSentence;
@property(readonly, nonatomic) NSString *localizedName;
- (id)standardFolderIdentifierWithPrefix:(id)arg1;
- (id)trashFolderIdentifier;
- (id)defaultFolderIdentifier;
- (void)createTrashFolder;
- (void)createDefaultFolder;
- (void)createStandardFolders;
- (void)setMarkedForDeletion:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeAllObserversIfNecessary;
- (void)removeTrashObserversIfNecessary;
- (void)addTrashObserversIfNecessary;
- (void)dealloc;
- (void)willTurnIntoFault;
- (void)prepareForDeletion;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (id)newlyCreatedRecord;
- (void)mergeDataFromRecord:(id)arg1;
- (_Bool)shouldBeDeletedFromLocalDatabase;
- (_Bool)needsToBePushedToCloud;
- (_Bool)needsToBeDeletedFromCloud;
- (id)recordType;
- (id)recordZoneName;
- (id)recordName;
- (_Bool)isInICloudAccount;

// Remaining properties
@property(retain, nonatomic) NSData *cryptoVerifier; // @dynamic cryptoVerifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *deviceMigrationStates; // @dynamic deviceMigrationStates;
@property(nonatomic) _Bool didFinishMigration; // @dynamic didFinishMigration;
@property(nonatomic) _Bool didMigrateOnMac; // @dynamic didMigrateOnMac;
@property(retain, nonatomic) NSSet *folders; // @dynamic folders;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSSet *legacyTombstones; // @dynamic legacyTombstones;
@property(retain, nonatomic) NSSet *notes; // @dynamic notes;
@property(retain, nonatomic) NSSet *ownerInverse; // @dynamic ownerInverse;
@property(retain, nonatomic) NSSet *serverChangeTokens; // @dynamic serverChangeTokens;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *userRecordName; // @dynamic userRecordName;

@end

