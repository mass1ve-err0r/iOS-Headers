//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/JSExport-Protocol.h>

@class NSDictionary, NSString, OKWidgetView;

@protocol OKPageViewControllerProxyExport <JSExport>
- (struct CGPoint)convertPointWithMotionAndParallax:(struct CGPoint)arg1 andZPosition:(double)arg2;
- (OKWidgetView *)addWidgetViewWithTemplateName:(NSString *)arg1 name:(NSString *)arg2 andSettings:(NSDictionary *)arg3;

@optional
- (struct CGPoint)convertPointWithMotionAndParallax:(struct CGPoint)arg1 andZPosition:(double)arg2 __JS_EXPORT_AS__convertPointWithMotionAndParallax:(id)arg3;
- (OKWidgetView *)addWidgetViewWithTemplateName:(NSString *)arg1 name:(NSString *)arg2 andSettings:(NSDictionary *)arg3 __JS_EXPORT_AS__widgetFromTemplate:(id)arg4;
@end

