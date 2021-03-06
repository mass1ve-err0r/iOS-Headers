/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMThread : EMCollection <EFLoggable, EMMessageListItem, EMThreadBuilder, NSCopying, NSSecureCoding> {
    NSArray * _ccList;
    long long  _conversationNotificationLevel;
    unsigned long long  _count;
    NSDate * _date;
    <EMCollectionItemID> * _displayMessageItemID;
    NSIndexSet * _flagColors;
    ECMessageFlags * _flags;
    bool  _hasAttachments;
    bool  _hasUnflagged;
    bool  _isBocked;
    bool  _isCCMe;
    unsigned long long  _isEditable;
    bool  _isToMe;
    bool  _isVIP;
    NSArray * _mailboxObjectIDs;
    EMMailboxScope * _mailboxScope;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mailboxScopeLock;
    <EMMailboxTypeResolver> * _mailboxTypeResolver;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mailboxTypeResolverLock;
    NSArray * _mailboxes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mailboxesLock;
    EFQuery * _originatingQuery;
    NSArray * _senderList;
    ECSubject * _subject;
    NSString * _summary;
    NSArray * _toList;
}

@property long long _internalID;
@property (readonly, copy) NSArray *ccList;
@property (readonly) long long conversationID;
@property (readonly) long long conversationNotificationLevel;
@property (readonly) unsigned long long count;
@property (readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) bool deleteMovesToTrash;
@property (readonly, copy) NSString *description;
@property (readonly) EMMessage *displayMessage;
@property (readonly) <EMCollectionItemID> *displayMessageItemID;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly, copy) NSIndexSet *flagColors;
@property (readonly) ECMessageFlags *flags;
@property (readonly) bool hasAttachments;
@property (readonly) bool hasUnflagged;
@property (readonly) unsigned long long hash;
@property (readonly) bool isBlocked;
@property (readonly) bool isCCMe;
@property (readonly) bool isEditable;
@property (readonly) bool isToMe;
@property (readonly) bool isVIP;
@property (nonatomic, readonly) <EMCollectionItemID> *itemID;
@property (readonly, copy) NSArray *mailboxObjectIDs;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (retain) <EMMailboxTypeResolver> *mailboxTypeResolver;
@property (readonly, copy) NSArray *mailboxes;
@property (nonatomic, readonly, copy) EMObjectID *objectID;
@property (nonatomic, readonly) EFQuery *originatingQuery;
@property (nonatomic, readonly) EMMessageRepository *repository;
@property (readonly, copy) NSArray *senderList;
@property (readonly) bool shouldArchiveByDefault;
@property (readonly) ECSubject *subject;
@property (readonly, copy) NSString *summary;
@property (readonly) Class superclass;
@property (readonly) bool supportsArchiving;
@property (readonly, copy) NSArray *toList;

+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitWithOriginatingQuery:(id)arg1 builder:(id /* block */)arg2;
- (long long)_internalID;
- (id)ccList;
- (long long)conversationID;
- (long long)conversationNotificationLevel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)date;
- (id)debugDescription;
- (bool)deleteMovesToTrash;
- (id)description;
- (id)displayMessage;
- (id)displayMessageItemID;
- (id)displayMessageObjectID;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)flagColors;
- (id)flags;
- (bool)hasAttachments;
- (bool)hasUnflagged;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 originatingQuery:(id)arg2 builder:(id /* block */)arg3;
- (bool)isBlocked;
- (bool)isCCMe;
- (bool)isEditable;
- (bool)isToMe;
- (bool)isVIP;
- (id)itemID;
- (id)itemIDForObjectID:(id)arg1;
- (id)mailboxObjectIDs;
- (id)mailboxScope;
- (id)mailboxTypeResolver;
- (id)mailboxes;
- (void)notifyChangeObserverAboutChangesByItemIDs:(id)arg1;
- (bool)objectIDBelongsToCollection:(id)arg1;
- (id)objectIDForItemID:(id)arg1;
- (id)originatingQuery;
- (id)query;
- (id)repository;
- (id)senderList;
- (void)setCcList:(id)arg1;
- (void)setConversationID:(long long)arg1;
- (void)setConversationNotificationLevel:(long long)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDisplayMessageItemID:(id)arg1;
- (void)setFlagColors:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setHasAttachments:(bool)arg1;
- (void)setHasUnflagged:(bool)arg1;
- (void)setIsBlocked:(bool)arg1;
- (void)setIsCCMe:(bool)arg1;
- (void)setIsToMe:(bool)arg1;
- (void)setIsVIP:(bool)arg1;
- (void)setMailboxObjectIDs:(id)arg1;
- (void)setMailboxTypeResolver:(id)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setRepository:(id)arg1;
- (void)setSenderList:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setToList:(id)arg1;
- (void)set_internalID:(long long)arg1;
- (bool)shouldArchiveByDefault;
- (id)subject;
- (id)summary;
- (bool)supportsArchiving;
- (id)toList;

@end
