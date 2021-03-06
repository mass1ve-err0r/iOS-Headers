/* Generated by RuntimeBrowser.
 */

@protocol IMAssistantMessageHandlerDataSource <NSObject>

@required

- (<IMAssistantAccountDataSource> *)accountDataSource;
- (<IMAssistantChatDataSource> *)chatDataSource;
- (NSCache *)contactIdentifierToUnifiedContactIdentifierCache;
- (<IMAssistantContactsDataSource> *)contactsDataSource;
- (<IMAssistantCoreTelephonySubscriptionsDataSource> *)coreTelephonySubscriptionsDataSource;
- (NSCache *)handleToContactIdentifierCache;
- (bool)isInternationalSpamFilteringEnabled;
- (<IMLocationManager> *)locationManagerDataSource;
- (bool)screentimeAllowedToShowChat:(IMChat *)arg1;
- (bool)screentimeAllowedToShowConversationWithHandleIDs:(NSArray *)arg1;
- (NSCache *)spiHandleToPersonCache;

@end
