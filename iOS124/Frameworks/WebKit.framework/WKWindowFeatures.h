//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSNumber, NSString;

@interface WKWindowFeatures : NSObject <WKObject>
{
    struct ObjectStorage<API::WindowFeatures> _windowFeatures;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) NSNumber *height;
@property(readonly, nonatomic) NSNumber *width;
@property(readonly, nonatomic) NSNumber *y;
@property(readonly, nonatomic) NSNumber *x;
@property(readonly, nonatomic) NSNumber *allowsResizing;
@property(readonly, nonatomic) NSNumber *toolbarsVisibility;
@property(readonly, nonatomic) NSNumber *statusBarVisibility;
@property(readonly, nonatomic) NSNumber *menuBarVisibility;
- (void)dealloc;
@property(readonly, nonatomic) NSNumber *_dialogDisplay;
@property(readonly, nonatomic) NSNumber *_fullscreenDisplay;
@property(readonly, nonatomic) NSNumber *_scrollbarsVisibility;
@property(readonly, nonatomic) NSNumber *_locationBarVisibility;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

