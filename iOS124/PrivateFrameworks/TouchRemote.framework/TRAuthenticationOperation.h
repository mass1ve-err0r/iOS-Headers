//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TROperation.h>

@class NSSet, UIViewController;

@interface TRAuthenticationOperation : TROperation
{
    _Bool _shouldIgnoreAuthFailures;
    _Bool _shouldForceInteractiveAuth;
    NSSet *_targetedServices;
    UIViewController *_presentingViewController;
}

@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) _Bool shouldForceInteractiveAuth; // @synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth;
@property(nonatomic) _Bool shouldIgnoreAuthFailures; // @synthesize shouldIgnoreAuthFailures=_shouldIgnoreAuthFailures;
@property(retain, nonatomic) NSSet *targetedServices; // @synthesize targetedServices=_targetedServices;
- (void).cxx_destruct;
- (void)execute;

@end

