//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, PKPaymentHeroImageManifest;

@interface NPKPaymentProvisioningFlowControllerWelcomeStepContext : NPKPaymentProvisioningFlowStepContext
{
    PKPaymentHeroImageManifest *_heroImageManifest;
    NSArray *_featuredNetworks;
}

@property(retain, nonatomic) NSArray *featuredNetworks; // @synthesize featuredNetworks=_featuredNetworks;
@property(retain, nonatomic) PKPaymentHeroImageManifest *heroImageManifest; // @synthesize heroImageManifest=_heroImageManifest;
- (void).cxx_destruct;
- (id)description;

@end

