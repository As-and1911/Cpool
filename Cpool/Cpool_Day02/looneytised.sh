#!/bin/bash
cat passwd |  sed -n -e 's/theo1/While E. Coyote/p' -e 's/steven1/Daffy Duck/p' -e 's/arnaud1/Porky Pig/p' -e 's/pierre-jean/Marvin the Martian/p'
