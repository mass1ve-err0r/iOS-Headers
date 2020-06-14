/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFWunderlistTask : MTLModel <MTLJSONSerializing> {
    long long  _assigneeId;
    long long  _assignerId;
    NSDate * _createdAt;
    long long  _createdById;
    NSDate * _dueDate;
    long long  _listId;
    long long  _revision;
    bool  _starred;
    long long  _taskId;
    NSString * _title;
}

@property (nonatomic, readonly) long long assigneeId;
@property (nonatomic, readonly) long long assignerId;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) long long createdById;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSDate *dueDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long listId;
@property (nonatomic, readonly) long long revision;
@property (nonatomic, readonly) bool starred;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long taskId;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *webURL;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)createdAtJSONTransformer;
+ (id)dueDateJSONTransformer;
+ (id)starredJSONTransformer;

- (void).cxx_destruct;
- (long long)assigneeId;
- (long long)assignerId;
- (id)createdAt;
- (long long)createdById;
- (id)dueDate;
- (long long)listId;
- (long long)revision;
- (bool)starred;
- (long long)taskId;
- (id)title;
- (id)webURL;

@end