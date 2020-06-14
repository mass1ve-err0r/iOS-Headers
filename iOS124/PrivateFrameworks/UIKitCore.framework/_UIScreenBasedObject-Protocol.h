//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSDictionary, UIScreen;

@protocol _UIScreenBasedObject <NSObject>
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (_Bool)_matchingOptions:(NSDictionary *)arg1;
- (id)_initWithScreen:(UIScreen *)arg1 options:(NSDictionary *)arg2;
@end
