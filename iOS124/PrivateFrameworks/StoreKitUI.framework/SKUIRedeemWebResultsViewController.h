//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIRedeemResultsViewController.h>

#import <StoreKitUI/SUStorePageViewControllerResponder-Protocol.h>

@class NSString;

@interface SKUIRedeemWebResultsViewController : SKUIRedeemResultsViewController <SUStorePageViewControllerResponder>
{
}

+ (_Bool)canShowResultsForRedeem:(id)arg1;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

