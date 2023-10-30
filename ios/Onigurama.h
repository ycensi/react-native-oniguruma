#ifdef __cplusplus
#import "react-native-onigurama.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNOniguramaSpec.h"

@interface Onigurama : NSObject <NativeOniguramaSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Onigurama : NSObject <RCTBridgeModule>
#endif

@end
