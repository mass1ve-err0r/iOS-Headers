//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/TKSmartCardUserInteractionForPINOperation.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@class NSData, TKSmartCardPINFormat, TKSmartCardSlot;

@interface TKSmartCardUserInteractionForSecurePINChange : TKSmartCardUserInteractionForPINOperation <NSSecureCoding>
{
    unsigned long long _PINConfirmation;
    TKSmartCardSlot *_slot;
    TKSmartCardPINFormat *_PINFormat;
    NSData *_APDU;
    long long _currentPINByteOffset;
    long long _newPINByteOffset;
}

+ (_Bool)supportsSecureCoding;
@property long long newPINByteOffset; // @synthesize newPINByteOffset=_newPINByteOffset;
@property long long currentPINByteOffset; // @synthesize currentPINByteOffset=_currentPINByteOffset;
@property(retain) NSData *APDU; // @synthesize APDU=_APDU;
@property(retain) TKSmartCardPINFormat *PINFormat; // @synthesize PINFormat=_PINFormat;
@property __weak TKSmartCardSlot *slot; // @synthesize slot=_slot;
@property unsigned long long PINConfirmation; // @synthesize PINConfirmation=_PINConfirmation;
- (void).cxx_destruct;
- (void)runWithReply:(CDUnknownBlockType)arg1;
- (void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 currentPINByteOffset:(long long)arg4 newPINByteOffset:(long long)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

