/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryDeleteGroupEvent : CNChangeHistoryEvent {
    NSString * _groupIdentifier;
}

@property (nonatomic, readonly) NSString *groupIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
