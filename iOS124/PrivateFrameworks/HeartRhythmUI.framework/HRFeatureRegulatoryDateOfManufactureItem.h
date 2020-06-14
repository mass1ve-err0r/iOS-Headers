//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HeartRhythmUI/HRFeatureRegulatoryPanelDisplayable-Protocol.h>

@class NSAttributedString, NSString;
@protocol HRFeatureRegulatoryPanelDisplayUpdateDelegate;

@interface HRFeatureRegulatoryDateOfManufactureItem : NSObject <HRFeatureRegulatoryPanelDisplayable>
{
    NSString *_productName;
    long long _deviceType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long cellAccessoryType;
@property(readonly, nonatomic) _Bool isInteractive;
@property(readonly, copy, nonatomic) NSAttributedString *valueString;
@property(readonly, copy, nonatomic) NSAttributedString *titleString;
- (id)initWithProductName:(id)arg1 deviceType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate;

@end

