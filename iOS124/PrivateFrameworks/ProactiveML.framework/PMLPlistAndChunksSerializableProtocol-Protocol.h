//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray;

@protocol PMLPlistAndChunksSerializableProtocol <NSObject>
- (id)initWithPlist:(id)arg1 chunks:(NSArray *)arg2 context:(NSDictionary *)arg3;
- (id)toPlistWithChunks:(NSMutableArray *)arg1;
@end

