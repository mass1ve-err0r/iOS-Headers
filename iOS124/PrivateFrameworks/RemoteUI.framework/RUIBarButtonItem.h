//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

@class UIBarButtonItem;

@interface RUIBarButtonItem : RUIElement
{
    UIBarButtonItem *_barButtonItem;
    CDUnknownBlockType _action;
}

@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
- (void)_buttonPressed:(id)arg1;

@end

