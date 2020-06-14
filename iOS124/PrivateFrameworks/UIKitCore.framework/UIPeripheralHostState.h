//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIPeripheralHostState : NSObject
{
    struct UIPeripheralAnimationGeometry _geometry;
    NSDictionary *_screenGeometry;
    _Bool _inPositionIsDestination;
}

+ (id)stateWithGeometry:(struct UIPeripheralAnimationGeometry)arg1 inPositionIsDestination:(_Bool)arg2;
@property(nonatomic) _Bool inPositionIsDestination; // @synthesize inPositionIsDestination=_inPositionIsDestination;
@property(retain, nonatomic) NSDictionary *screenGeometry; // @synthesize screenGeometry=_screenGeometry;
@property(nonatomic) struct UIPeripheralAnimationGeometry geometry; // @synthesize geometry=_geometry;
- (void)dealloc;

@end

