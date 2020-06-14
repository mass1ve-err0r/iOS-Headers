//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GSAddition, NSArray, NSDictionary, NSString, NSURL;
@protocol NSCopying><NSSecureCoding;

@protocol GSAdditionStoring
@property(readonly, nonatomic) id <NSCopying><NSSecureCoding> persistentIdentifier;
@property(retain) NSURL *documentURL;
- (void)removeAllAdditionsForNamespaces:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeAdditions:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (struct NSEnumerator *)enumeratorForAdditionsInNameSpace:(NSString *)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
- (NSArray *)additionsWithNames:(NSArray *)arg1 inNameSpace:(NSString *)arg2 error:(id *)arg3;
- (GSAddition *)additionWithName:(NSString *)arg1 inNameSpace:(NSString *)arg2 error:(id *)arg3;
- (_Bool)replaceDocumentWithContentsOfItemAtURL:(NSURL *)arg1 preservingCurrentVersionWithCreationInfo:(NSDictionary *)arg2 createdAddition:(id *)arg3 error:(id *)arg4;
- (_Bool)replaceDocumentWithContentsOfAddition:(GSAddition *)arg1 preservingCurrentVersionWithCreationInfo:(NSDictionary *)arg2 createdAddition:(id *)arg3 error:(id *)arg4;
- (void)createAdditionStagedAtURL:(NSURL *)arg1 creationInfo:(NSDictionary *)arg2 completionHandler:(void (^)(GSAddition *, NSError *))arg3;
- (NSURL *)prepareAdditionCreationWithItemAtURL:(NSURL *)arg1 byMoving:(_Bool)arg2 creationInfo:(NSDictionary *)arg3 error:(id *)arg4;
- (NSURL *)URLforReplacingItemWithError:(id *)arg1;
- (void)cleanupStagingURL:(NSURL *)arg1;
- (NSURL *)stagingURLforCreatingAdditionWithError:(id *)arg1;
@end

