/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKTransitPassBalanceModel : NSObject {
    NSSet * _balances;
    NSArray * _commutePlanFields;
    bool  _commutePlanValueRequired;
    PKPaymentPass * _pass;
    NSArray * _transitBalanceFields;
    PKTransitPassProperties * _transitPassProperties;
}

@property (nonatomic, readonly) NSArray *allTransitItemsFields;
@property (nonatomic, copy) NSSet *balances;
@property (nonatomic, readonly) NSArray *commutePlanFields;
@property (getter=isCommutePlanValueRequired, nonatomic) bool commutePlanValueRequired;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) NSArray *transitBalanceFields;
@property (nonatomic, retain) PKTransitPassProperties *transitPassProperties;

- (void).cxx_destruct;
- (id)_actionWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)_allPassBalanceFieldsWithBalancesByID:(id)arg1;
- (id)_balanceByIDWithBalances:(id)arg1;
- (id)_balanceFieldWithPassField:(id)arg1 balance:(id)arg2 isPrimaryBalance:(bool)arg3;
- (id)_balanceFieldsWithBalancesByID:(id)arg1 passFields:(id)arg2 maximumCount:(unsigned long long)arg3;
- (id)_commutePlanFieldsWithBalancesByID:(id)arg1;
- (id)_commutePlanWithFelicaPassProperties:(id)arg1;
- (id)_formattedValueWithCommutePlan:(id)arg1 balancesByID:(id)arg2;
- (id)_identifierFromAction:(id)arg1 type:(unsigned long long)arg2;
- (id)_paymentBalanceFromTransitPassProperty:(id)arg1;
- (id)_primaryDisplayableBalanceFieldWithBalancesByID:(id)arg1;
- (bool)_shouldAddCommutePlan:(id)arg1 withBalancesByID:(id)arg2;
- (id)allTransitItemsFields;
- (id)balances;
- (id)commutePlanFields;
- (id)description;
- (id)initWithPass:(id)arg1;
- (id)initWithPass:(id)arg1 transitProperties:(id)arg2 balances:(id)arg3 commutePlanValueRequired:(bool)arg4;
- (bool)isCommutePlanValueRequired;
- (bool)isEqual:(id)arg1;
- (id)pass;
- (void)setBalances:(id)arg1;
- (void)setCommutePlanValueRequired:(bool)arg1;
- (void)setTransitPassProperties:(id)arg1;
- (id)transitBalanceFields;
- (id)transitPassProperties;
- (void)updateItemFields;

@end
