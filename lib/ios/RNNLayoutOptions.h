#import "RNNOptions.h"

@interface RNNLayoutOptions : RNNOptions

@property (nonatomic, strong) Color* backgroundColor;
@property (nonatomic, strong) Color* componentBackgroundColor;
@property (nonatomic, strong) Text* direction;
@property (nonatomic, strong) id orientation;

#if TARGET_OS_TV
- (int)supportedOrientations;
#else
- (UIInterfaceOrientationMask)supportedOrientations;
#endif

@end
