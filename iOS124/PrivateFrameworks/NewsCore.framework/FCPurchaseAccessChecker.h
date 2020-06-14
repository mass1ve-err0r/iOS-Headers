//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCAccessChecker.h>

@protocol FCPaidAccessCheckerType;

@interface FCPurchaseAccessChecker : FCAccessChecker
{
    id <FCPaidAccessCheckerType> _paidAccessChecker;
}

@property(readonly, nonatomic) id <FCPaidAccessCheckerType> paidAccessChecker; // @synthesize paidAccessChecker=_paidAccessChecker;
- (void).cxx_destruct;
- (void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)canSynchronouslyCheckAccessToItem:(id)arg1;
- (id)initWithPaidAccessChecker:(id)arg1;
- (id)init;

@end

