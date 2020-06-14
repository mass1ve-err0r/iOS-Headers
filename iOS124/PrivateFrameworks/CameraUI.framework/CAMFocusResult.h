//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMFocusResult : NSObject
{
    _Bool _performingContrastDetection;
    _Bool _contrastBasedFocusDidStart;
    _Bool _contrastBasedFocusDidEnd;
    _Bool _deviceSupportsFocus;
    long long _focusMode;
    struct CGPoint _pointOfInterest;
}

@property(readonly, nonatomic) _Bool deviceSupportsFocus; // @synthesize deviceSupportsFocus=_deviceSupportsFocus;
@property(readonly, nonatomic) _Bool contrastBasedFocusDidEnd; // @synthesize contrastBasedFocusDidEnd=_contrastBasedFocusDidEnd;
@property(readonly, nonatomic) _Bool contrastBasedFocusDidStart; // @synthesize contrastBasedFocusDidStart=_contrastBasedFocusDidStart;
@property(readonly, nonatomic) long long focusMode; // @synthesize focusMode=_focusMode;
@property(readonly, nonatomic) struct CGPoint pointOfInterest; // @synthesize pointOfInterest=_pointOfInterest;
@property(readonly, nonatomic, getter=isPerformingContrastDetection) _Bool performingContrastDetection; // @synthesize performingContrastDetection=_performingContrastDetection;
- (id)description;
- (id)initWithMode:(long long)arg1 pointOfInterest:(struct CGPoint)arg2 performingContrastDetection:(_Bool)arg3 contrastBasedFocusDidStart:(_Bool)arg4 contrastBasedFocusDidEnd:(_Bool)arg5 deviceSupportsFocus:(_Bool)arg6;

@end

