//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HMDWakeConfigurationParamaters : NSObject <NSCopying, HMDTLVProtocol>
{
    NSData *_delimiter;
    NSData *_primaryIdentifier;
    NSMutableArray *_secondaryIdentifier;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableArray *secondaryIdentifier; // @synthesize secondaryIdentifier=_secondaryIdentifier;
@property(retain, nonatomic) NSData *primaryIdentifier; // @synthesize primaryIdentifier=_primaryIdentifier;
@property(retain, nonatomic) NSData *delimiter; // @synthesize delimiter=_delimiter;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithDelimiter:(id)arg1 primaryIdentifier:(id)arg2 secondaryIdentifier:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

