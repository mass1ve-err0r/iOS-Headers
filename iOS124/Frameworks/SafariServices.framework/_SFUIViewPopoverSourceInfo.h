//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFPopoverSourceInfo-Protocol.h>

@class NSString, UIBarButtonItem, UIView;

@interface _SFUIViewPopoverSourceInfo : NSObject <_SFPopoverSourceInfo>
{
    UIView *_view;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *popoverSourceView;
@property(readonly, nonatomic) struct CGRect popoverSourceRect;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

