//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSOperationQueue, SKUIClientContext, SKUIRedeemConfiguration;
@protocol SKUIRedeemStepDelegate;

@interface SKUIRedeemStepViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    SKUIRedeemConfiguration *_configuration;
    id <SKUIRedeemStepDelegate> _redeemStepDelegate;
}

@property(nonatomic) __weak id <SKUIRedeemStepDelegate> redeemStepDelegate; // @synthesize redeemStepDelegate=_redeemStepDelegate;
@property(retain, nonatomic) SKUIRedeemConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowPassbookLearnMore;

@end

