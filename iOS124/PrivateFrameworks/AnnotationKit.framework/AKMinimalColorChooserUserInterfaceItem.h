//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKMinimalUserInterfaceItem.h>

#import <AnnotationKit/AKColorChooserUserInterfaceItem-Protocol.h>

@class NSString, UIColor;

@interface AKMinimalColorChooserUserInterfaceItem : AKMinimalUserInterfaceItem <AKColorChooserUserInterfaceItem>
{
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

