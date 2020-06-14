//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKExpressTransactionState : NSObject <NSSecureCoding>
{
    _Bool _processing;
    long long _technologyType;
    NSString *_paymentApplicationIdentifier;
    NSString *_passUniqueIdentifier;
    unsigned long long _receivedEvents;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long receivedEvents; // @synthesize receivedEvents=_receivedEvents;
@property(nonatomic, getter=isProcessing) _Bool processing; // @synthesize processing=_processing;
@property(retain, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(copy, nonatomic) NSString *paymentApplicationIdentifier; // @synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier;
@property(nonatomic) long long technologyType; // @synthesize technologyType=_technologyType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

