//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVAccessoryItem-Protocol.h>

@class NSString, UIView;

@interface SVAccessoryItem : NSObject <SVAccessoryItem>
{
    UIView *_view;
    unsigned long long _displayMode;
}

@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

