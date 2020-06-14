//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/TKTokenAuthOperation.h>

@class NSData, NSString, TKSmartCard, TKSmartCardPINFormat;

@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation
{
    TKSmartCardPINFormat *_PINFormat;
    NSData *_APDUTemplate;
    long long _PINByteOffset;
    TKSmartCard *_smartCard;
    NSString *_PIN;
    NSString *_localizedDescription;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy) NSString *PIN; // @synthesize PIN=_PIN;
@property(retain) TKSmartCard *smartCard; // @synthesize smartCard=_smartCard;
@property long long PINByteOffset; // @synthesize PINByteOffset=_PINByteOffset;
@property(copy) NSData *APDUTemplate; // @synthesize APDUTemplate=_APDUTemplate;
@property(retain) TKSmartCardPINFormat *PINFormat; // @synthesize PINFormat=_PINFormat;
- (void).cxx_destruct;
- (_Bool)finishWithError:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

