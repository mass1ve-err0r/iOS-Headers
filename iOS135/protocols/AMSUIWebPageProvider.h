/* Generated by RuntimeBrowser.
 */

@protocol AMSUIWebPageProvider <NSObject>

@required

- (UIViewController<AMSUIWebPagePresenter> *)createViewController;
- (bool)disableReappearPlaceholder;
- (AMSUIWebNavigationBarModel *)navigationBar;

@end