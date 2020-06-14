//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class GQDBGAbstractSlide, GQDBGPresentation, GQDBGSlide, GQDSStylesheet, GQSDocument;

@protocol GQKeynoteGenerator <NSObject>
+ (Class)enterSlideDrawables:(GQDBGAbstractSlide *)arg1 state:(GQSDocument *)arg2;
+ (int)endSlide:(GQDBGSlide *)arg1 state:(GQSDocument *)arg2;
+ (int)beginSlide:(GQDBGSlide *)arg1 state:(GQSDocument *)arg2;
+ (int)handleThemeStylesheet:(GQDSStylesheet *)arg1 state:(GQSDocument *)arg2;
+ (int)handleSlideSize:(GQDBGPresentation *)arg1 state:(GQSDocument *)arg2;
+ (int)endPresentation:(GQDBGPresentation *)arg1 state:(GQSDocument *)arg2;
+ (int)beginPresentation:(GQDBGPresentation *)arg1 state:(GQSDocument *)arg2;
@end

