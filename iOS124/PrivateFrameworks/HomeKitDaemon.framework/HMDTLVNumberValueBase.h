//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface HMDTLVNumberValueBase : NSObject <NSCopying, HMDTLVProtocol>
{
    NSNumber *_value;
}

@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_serialize;
- (id)serializeWithError:(id *)arg1;
- (id)_parseFromData:(const char *)arg1 length:(unsigned long long)arg2 status:(int *)arg3;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithValue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

