/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBarInsertLayoutData : NSObject <NSCopying> {
    bool  _active;
    double  _assignedHeight;
    bool  _collapsible;
    double  _collapsingHeight;
    NSString * _identifier;
    bool  _ignoredForCollapsingBehaviors;
    double  _minimumHeight;
    long long  _order;
    double  _preferredHeight;
    bool  _prefersExpanded;
    long long  _priority;
}

@property (nonatomic) bool active;
@property (nonatomic, readonly) double assignedHeight;
@property (getter=isCollapsible, nonatomic) bool collapsible;
@property (nonatomic, readonly) double collapsingHeight;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool ignoredForCollapsingBehaviors;
@property (nonatomic, readonly) double layoutMinimumHeight;
@property (nonatomic) double minimumHeight;
@property (nonatomic) long long order;
@property (nonatomic) double preferredHeight;
@property (nonatomic) bool prefersExpanded;
@property (nonatomic) long long priority;
@property (getter=isVariableHeight, nonatomic, readonly) bool variableHeight;

+ (struct { double x1; double x2; double x3; })calculateLayoutHeights:(id)arg1;
+ (id)calculateRestingHeightsForLayouts:(id)arg1;
+ (void)updateLayoutParameters:(id)arg1 overflowLayout:(id)arg2 forAvailableHeight:(double)arg3;

- (void).cxx_destruct;
- (bool)active;
- (double)assignedHeight;
- (double)collapsingHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (bool)ignoredForCollapsingBehaviors;
- (id)init;
- (bool)isCollapsible;
- (bool)isVariableHeight;
- (double)layoutMinimumHeight;
- (double)minimumHeight;
- (long long)order;
- (double)preferredHeight;
- (bool)prefersExpanded;
- (long long)priority;
- (void)setActive:(bool)arg1;
- (void)setCollapsible:(bool)arg1;
- (void)setFixedHeight:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIgnoredForCollapsingBehaviors:(bool)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setOrder:(long long)arg1;
- (void)setPreferredHeight:(double)arg1;
- (void)setPrefersExpanded:(bool)arg1;
- (void)setPriority:(long long)arg1;

@end