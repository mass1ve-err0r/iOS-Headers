//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsUI/INUIHostedViewControlling-Protocol.h>

@class INInteraction, NSSet;

@protocol INUIHostedViewControllingPrivate <INUIHostedViewControlling>
- (void)configureViewForParameters:(NSSet *)arg1 ofInteraction:(INInteraction *)arg2 context:(unsigned long long)arg3 completion:(void (^)(_Bool, NSSet *, struct CGSize))arg4;

@optional
- (void)viewWasCancelled;
@end

