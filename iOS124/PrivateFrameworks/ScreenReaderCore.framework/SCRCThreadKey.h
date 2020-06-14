//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderCore/NSCopying-Protocol.h>

@class NSString;

@interface SCRCThreadKey : NSObject <NSCopying>
{
    unsigned long long _threadID;
    NSString *_threadDescription;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) NSString *threadDescription; // @dynamic threadDescription;
@property(readonly, nonatomic) unsigned long long threadID; // @dynamic threadID;
- (void)dealloc;
- (id)_allCurrentThreadIDs;
- (id)initWithObject:(id)arg1;
- (id)initWithDescription:(id)arg1;
- (id)init;
- (id)_initWithThreadID:(unsigned long long)arg1 description:(id)arg2;

@end

