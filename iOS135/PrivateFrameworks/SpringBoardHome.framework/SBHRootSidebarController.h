/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHRootSidebarController : UIViewController <SBHSidebarProvider, UIGestureRecognizerDelegate> {
    SBHDateHeaderViewController * _dateViewController;
    <SBHSidebarProviderDelegate> * _delegate;
    NSLayoutConstraint * _dockHeightConstraint;
    unsigned long long  _layoutInsetsIgnoredEdges;
    _UILegibilitySettings * _legibilitySettings;
    SBHSidebarVisualConfiguration * _sidebarVisualConfiguration;
    WGWidgetGroupViewController * _widgetViewController;
    NSMutableArray * _widgetViewControllerConstraints;
}

@property (nonatomic, readonly) SBHDateHeaderViewController *dateViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHSidebarProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutConstraint *dockHeightConstraint;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long layoutInsetsIgnoredEdges;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, retain) WGWidgetGroupViewController *widgetViewController;
@property (nonatomic, copy) NSMutableArray *widgetViewControllerConstraints;

- (void).cxx_destruct;
- (void)_addEditButton;
- (bool)_canShowWhileLocked;
- (void)_configureLayoutMargins;
- (void)_configureWidgetViewController;
- (void)_updateDockHeightConstraint;
- (id)dateViewController;
- (id)delegate;
- (id)dockHeightConstraint;
- (unsigned long long)layoutInsetsIgnoredEdges;
- (id)legibilitySettings;
- (void)setDelegate:(id)arg1;
- (void)setDockHeightConstraint:(id)arg1;
- (void)setEditingIcons:(bool)arg1;
- (void)setLayoutInsetsIgnoredEdges:(unsigned long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSidebarVisualConfiguration:(id)arg1;
- (void)setWidgetViewController:(id)arg1;
- (void)setWidgetViewControllerConstraints:(id)arg1;
- (id)sidebarVisualConfiguration;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)widgetViewController;
- (id)widgetViewControllerConstraints;

@end
