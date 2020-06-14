//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSLocale;

@interface TKSmartCardUserInteractionForPINOperation : TKSmartCardUserInteraction <NSSecureCoding>
{
    NSLocale *_locale;
    unsigned short _resultSW;
    unsigned long long _PINCompletion;
    NSArray *_PINMessageIndices;
    NSData *_resultData;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSData *resultData; // @synthesize resultData=_resultData;
@property unsigned short resultSW; // @synthesize resultSW=_resultSW;
@property(retain) NSArray *PINMessageIndices; // @synthesize PINMessageIndices=_PINMessageIndices;
@property unsigned long long PINCompletion; // @synthesize PINCompletion=_PINCompletion;
- (void).cxx_destruct;
@property(retain) NSLocale *locale;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

