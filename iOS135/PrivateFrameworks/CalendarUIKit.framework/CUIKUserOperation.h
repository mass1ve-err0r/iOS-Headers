/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKUserOperation : NSObject {
    bool  _inverseOperationPrecomputed;
    NSArray * _objects;
    NSArray * _originalObjects;
    NSArray * _originalSliceDescriptions;
    NSString * _precomputedActionName;
    CUIKUserOperation * _precomputedInverseOperation;
    long long  _span;
}

@property bool inverseOperationPrecomputed;
@property (retain) NSArray *objects;
@property (retain) NSArray *originalObjects;
@property (retain) NSArray *originalSliceDescriptions;
@property (retain) NSString *precomputedActionName;
@property (retain) CUIKUserOperation *precomputedInverseOperation;
@property long long span;

- (void).cxx_destruct;
- (bool)inverseOperationPrecomputed;
- (id)objects;
- (id)originalObjects;
- (id)originalSliceDescriptions;
- (id)precomputedActionName;
- (id)precomputedInverseOperation;
- (void)setInverseOperationPrecomputed:(bool)arg1;
- (void)setObjects:(id)arg1;
- (void)setOriginalObjects:(id)arg1;
- (void)setOriginalSliceDescriptions:(id)arg1;
- (void)setPrecomputedActionName:(id)arg1;
- (void)setPrecomputedInverseOperation:(id)arg1;
- (void)setSpan:(long long)arg1;
- (long long)span;

@end