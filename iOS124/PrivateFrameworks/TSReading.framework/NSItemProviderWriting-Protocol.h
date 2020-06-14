//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSArray, NSProgress, NSString;

@protocol NSItemProviderWriting <NSObject>
+ (NSArray *)writableTypeIdentifiersForItemProvider;
- (NSProgress *)loadDataWithTypeIdentifier:(NSString *)arg1 forItemProviderCompletionHandler:(void (^)(NSData *, NSError *))arg2;

@optional
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(NSString *)arg1;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(NSString *)arg1;
@end

