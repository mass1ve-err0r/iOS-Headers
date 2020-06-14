//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SBHardwareButtonInteraction <NSObject>

@optional
- (void)observeSinglePressDidFail;
- (void)observeFinalPressUp;
- (void)observeLongPressCanceled;
- (_Bool)consumeLongPress;
- (_Bool)disallowsLongPressForReason:(id *)arg1;
- (_Bool)disallowsTriplePressForReason:(id *)arg1;
- (_Bool)disallowsDoublePressForReason:(id *)arg1;
- (_Bool)disallowsSinglePressForReason:(id *)arg1;
- (_Bool)consumeTriplePressUp;
- (_Bool)consumeDoublePressUp;
- (_Bool)consumeDoublePressDown;
- (_Bool)consumeSinglePressUp;
- (_Bool)consumeSinglePressDown;
- (_Bool)consumeSecondPressDown;
- (_Bool)consumeInitialPressUp;
- (_Bool)consumeInitialPressDown;
@end

