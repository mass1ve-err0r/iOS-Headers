//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSAuthenticationToken-Protocol.h>

@class NSData, NSDate, NSString;

@interface VSSAMLAuthenticationToken : NSObject <VSAuthenticationToken>
{
    NSData *_serializedData;
}

@property(copy, nonatomic) NSData *serializedData; // @synthesize serializedData=_serializedData;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *body;
- (_Bool)isFromUnsupportedProvider;
- (_Bool)isOpaque;
- (_Bool)isValid;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
- (id)initWithSerializedData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

