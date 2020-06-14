//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, TSDLayout;
@protocol TSDInfo;

@protocol TSDAdaptiveLayout
- (struct CGPoint)applyAdaptiveLayoutTo:(TSDLayout *)arg1 info:(NSObject<TSDInfo> *)arg2 offset:(struct CGPoint)arg3;
- (void)resetLayout:(TSDLayout *)arg1 forInfo:(NSObject<TSDInfo> *)arg2;
- (void)updateRootLayoutShiftFor:(NSObject<TSDInfo> *)arg1 offset:(struct CGPoint)arg2;
- (_Bool)isSavedShiftForInfo:(NSObject<TSDInfo> *)arg1 equalToOffset:(struct CGPoint)arg2;
- (struct CGPoint)adjustMappingPointForInfo:(NSObject<TSDInfo> *)arg1 fromPoint:(struct CGPoint)arg2;
- (void)endDynamicAdaptiveLayout;
- (void)beginDynamicAdaptiveLayout;
@end

