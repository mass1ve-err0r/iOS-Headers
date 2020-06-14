//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject
{
    _Bool _hasTrailingLineSeperator;
}

@property(nonatomic) _Bool hasTrailingLineSeperator; // @synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator;
- (id)_foreignExchangeLineItemsForExchangeInfo:(id)arg1;
- (id)_rewardsLineItemsForRewards:(id)arg1;
- (id)_feeLineItemsForFees:(id)arg1;
- (id)_subtotalLineItemForTransaction:(id)arg1;
- (id)_totalReceivedLineItemForTransaction:(id)arg1;
- (id)_totalSentLineItemForTransaction:(id)arg1;
- (id)_totalTransferredItemForTransaction:(id)arg1;
- (id)_totalPaidLineItemForTransaction:(id)arg1 isUnqualified:(_Bool)arg2;
- (id)_primaryFundingSourceLineItemForTransaction:(id)arg1 pass:(id)arg2;
- (id)_secondaryFundingSourceLineItemForTransaction:(id)arg1;
- (id)_lineItemsForPeerPaymentTransaction:(id)arg1 pass:(id)arg2;
- (id)_lineItemsForPurchaseTransaction:(id)arg1 pass:(id)arg2;
- (id)_lineItemsForWithdrawalTransaction:(id)arg1 pass:(id)arg2;
- (id)lineItemsForTransaction:(id)arg1 pass:(id)arg2 associatedTransaction:(id)arg3;

@end

