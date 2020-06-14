//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDConnectionLineAbstractLayout.h>

@interface TSDConnectionLineLayout : TSDConnectionLineAbstractLayout
{
    double mStartClipT;
    double mEndClipT;
}

- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;
- (id)quadraticCurve:(struct CGPoint [3])arg1;

@end

