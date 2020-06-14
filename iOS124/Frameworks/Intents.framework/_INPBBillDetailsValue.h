//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBBillDetailsValue-Protocol.h>

@class NSString, _INPBBillPayeeValue, _INPBCurrencyAmountValue, _INPBDateTime, _INPBValueMetadata;

@interface _INPBBillDetailsValue : PBCodable <_INPBBillDetailsValue, NSSecureCoding, NSCopying>
{
    CDStruct_c8e9def3 _has;
    int _billType;
    int _status;
    _INPBCurrencyAmountValue *_amountDue;
    _INPBBillPayeeValue *_billPayee;
    _INPBDateTime *_dueDate;
    _INPBCurrencyAmountValue *_lateFee;
    _INPBCurrencyAmountValue *_minimumDue;
    _INPBDateTime *_paymentDate;
    _INPBValueMetadata *_valueMetadata;
}

@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) _INPBDateTime *paymentDate; // @synthesize paymentDate=_paymentDate;
@property(retain, nonatomic) _INPBCurrencyAmountValue *minimumDue; // @synthesize minimumDue=_minimumDue;
@property(retain, nonatomic) _INPBCurrencyAmountValue *lateFee; // @synthesize lateFee=_lateFee;
@property(retain, nonatomic) _INPBDateTime *dueDate; // @synthesize dueDate=_dueDate;
@property(nonatomic) int billType; // @synthesize billType=_billType;
@property(retain, nonatomic) _INPBBillPayeeValue *billPayee; // @synthesize billPayee=_billPayee;
@property(retain, nonatomic) _INPBCurrencyAmountValue *amountDue; // @synthesize amountDue=_amountDue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasValueMetadata;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasPaymentDate;
@property(readonly, nonatomic) _Bool hasMinimumDue;
@property(readonly, nonatomic) _Bool hasLateFee;
@property(readonly, nonatomic) _Bool hasDueDate;
- (int)StringAsBillType:(id)arg1;
- (id)billTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasBillType;
@property(readonly, nonatomic) _Bool hasBillPayee;
@property(readonly, nonatomic) _Bool hasAmountDue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

