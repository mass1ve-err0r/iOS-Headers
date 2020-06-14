//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUGridDisplayOptions-Protocol.h>
#import <HomeUI/NSCopying-Protocol.h>

@class NSString, UIVisualEffect;

@interface HUGridCellBackgroundDisplayOptions : NSObject <HUGridDisplayOptions, NSCopying>
{
    unsigned long long _contentColorStyle;
    unsigned long long _displayStyle;
    UIVisualEffect *_backgroundVisualEffect;
}

+ (id)defaultOptions;
@property(retain, nonatomic) UIVisualEffect *backgroundVisualEffect; // @synthesize backgroundVisualEffect=_backgroundVisualEffect;
@property(nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) unsigned long long contentColorStyle; // @synthesize contentColorStyle=_contentColorStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

