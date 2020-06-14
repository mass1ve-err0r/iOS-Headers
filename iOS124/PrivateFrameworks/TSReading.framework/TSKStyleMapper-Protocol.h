//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSSStyle, TSSStylesheet;

@protocol TSKStyleMapper <NSObject>
- (void)varyInThemeStylesheetIf:(_Bool)arg1 forDurationOfBlock:(void (^)(void))arg2;
- (void)varyInThemeStylesheetForDurationOfBlock:(void (^)(void))arg1;
- (TSSStyle *)mappedStyleForStyle:(TSSStyle *)arg1 inThemeStylesheet:(_Bool)arg2;
- (TSSStyle *)mappedStyleForStyle:(TSSStyle *)arg1;
- (void)popMappingContext:(id)arg1;
- (void)pushMappingContext:(id)arg1;
- (TSSStylesheet *)targetStylesheet;
@end

