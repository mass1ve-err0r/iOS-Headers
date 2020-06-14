//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBReusableViewMapDelegate-Protocol.h"

@class NSArray, SBIcon, SBIconView, SBIconViewMap;

@protocol SBIconViewMapDelegate <SBReusableViewMapDelegate>
- (long long)viewMap:(SBIconViewMap *)arg1 locationForIcon:(SBIcon *)arg2;
- (Class)iconViewClassForIcon:(SBIcon *)arg1 location:(long long)arg2;

@optional
- (void)viewMap:(SBIconViewMap *)arg1 configureIconView:(SBIconView *)arg2;
- (unsigned long long)viewMap:(SBIconViewMap *)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;
- (NSArray *)viewMapShouldPrepareViewsOfClasses:(SBIconViewMap *)arg1;
@end
